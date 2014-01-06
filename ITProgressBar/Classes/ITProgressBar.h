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
 *  Sets the width of the shadow.
 */
@property (nonatomic) CGFloat shadowWidth;

/**
 *  The image that is used on the stripes layer.
 *  You can use whatever image you want, just make sure it's tilable.
 */
@property (strong, nonatomic) NSImage *stripesImage;

@end
