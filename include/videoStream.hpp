/**
 *  Schulich Delta OnBoard Media Control
 *  Copyright (C) 2015 University of Calgary Solar Car Team
 *
 *  This file is part of the Schulich Delta OnBoard Media Control
 *
 *  The Schulich Delta OnBoard Media Control is free software: 
 *  you can redistribute it and/or modify it under the terms 
 *  of the GNU Affero General Public License as published by 
 *  the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  The Schulich Delta OnBoard Media Control is distributed 
 *  in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
 *  without even the implied warranty of MERCHANTABILITY or 
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Affero 
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General 
 *  Public License along with the Schulich Delta OnBoard Media 
 *  Control.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  For further contact, email <software@calgarysolarcar.ca>
 */

#pragma once

#include "threadClass.hpp"
#include <cv.h>
#include "opencv2/opencv.hpp"
#include "graphics_handler.h"

using namespace cv;

class VideoStream : public I_ThreadClass
{
    public:
        VideoStream();
        void signalToQuit();
        bool init_setting(SDL_Rect input_rect, int input_device);
        bool update(GraphicsHandler *graphics_handler_);
        IplImage *getFrame();

    protected:
        void ThreadFunction();

    private:
        SDL_Rect video_rect_;
        Mat m_frame;
        bool m_updateImage;
        int m_bufferNumber;
        IplImage m_threadImage1;
        IplImage m_threadImage2;
        IplImage m_threadImage3;
        bool m_quit;

        VideoCapture cap;

        bool imageReady();
};

