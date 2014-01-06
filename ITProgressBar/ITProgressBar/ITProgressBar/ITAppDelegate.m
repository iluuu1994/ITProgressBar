//
//  ITAppDelegate.m
//  ITProgressBar
//
//  Created by Ilija Tovilo on 25/10/13.
//  Copyright (c) 2013 Ilija Tovilo. All rights reserved.
//

#import "ITAppDelegate.h"

@implementation ITAppDelegate

- (IBAction)toggleAnimation:(id)sender {
    self.progressBar.animates = !self.progressBar.animates;
}

- (IBAction)toggleHidden:(id)sender {
    [CATransaction begin]; {
        // Comment-out to disable animation
        // [CATransaction setValue: (id) kCFBooleanTrue forKey: kCATransactionDisableActions];
        
        [self.progressBar setHidden:!self.progressBar.isHidden];
    }[CATransaction commit];
}

- (IBAction)setFloatValue:(id)sender {
    [self.progressBar.animator setFloatValue:[sender doubleValue]];
}

- (IBAction)setHeight:(id)sender {
    self.heightConstraint.constant = [sender doubleValue];
    [self.window setContentBorderThickness:[sender doubleValue] + (7 * 2) forEdge:NSMinYEdge];
}

@end
