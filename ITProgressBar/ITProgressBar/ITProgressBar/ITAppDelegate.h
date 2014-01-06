//
//  ITAppDelegate.h
//  ITProgressBar
//
//  Created by Ilija Tovilo on 25/10/13.
//  Copyright (c) 2013 Ilija Tovilo. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ITProgressBar.h"

@interface ITAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet ITProgressBar *progressBar;
@property (assign) IBOutlet NSLayoutConstraint *heightConstraint;

@end
