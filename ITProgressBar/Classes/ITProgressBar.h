//
// Copyright (c) 2014, Ilija Tovilo
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of the organization nor the
//       names of its contributors may be used to endorse or promote products
//       derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL ILIJA TOVILO BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

//
//  ITProgressBar.h
//  ITProgressBar
//
//  Created by Ilija Tovilo on 25/10/13.
//  Copyright (c) 2013 Ilija Tovilo. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>

/**
 *  ITProgressBar is a simple progress bar control.
 *  It's implemented using Core Animation, which makes it incredibly performant.
 */
@interface ITProgressBar : NSView

/**
 *  Indicates the progress of the operation
 */
@property (nonatomic, nonatomic) CGFloat floatValue;

/**
 *  Sets the color tint
 */
@property (strong, nonatomic) NSColor *colorTint;

/**
 *  Sets the color tint opacity
 */
@property (nonatomic) CGFloat colorTintOpacity;

/**
 *  Indicates if the stripes on the progress bar animate.
 *  If this is set to `NO`, the stripes layer will automatically hide.
 */
@property (nonatomic) BOOL animates;

/**
 *  The animation duration.
 *  Specifically, this is the diration by moving the tile image by it's width
 */
@property (nonatomic) CGFloat animationDuration;

/**
 *  Sets the width of the border.
 */
@property (nonatomic) CGFloat borderWidth;

/**
 *  Sets the color of the border.
 */
@property (strong, nonatomic) NSColor *borderColor;

/**
 *  Sets the width of the shadow.
 */
@property (nonatomic) CGFloat shadowWidth;

/**
 *  The image that is used on the stripes layer.
 *  You can use whatever image you want, just make sure it's tilable.
 */
@property (strong, nonatomic) NSImage *stripesImage;

/**
 *  The gradient colors used to render the background,
 *  as an NSArray of CGColorRef
 */
@property (strong, nonatomic) NSArray *backgroundColors;


@end
