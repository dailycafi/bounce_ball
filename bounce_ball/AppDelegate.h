//
//  AppDelegate.h
//  bounce_ball
//
//  Created by Fei Wen on 12-10-18.
//  Copyright __MyCompanyName__ 2012年. All rights reserved.
//

#import "cocos2d.h"

@interface bounce_ballAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow	*window_;
	MacGLView	*glView_;
}

@property (assign) IBOutlet NSWindow	*window;
@property (assign) IBOutlet MacGLView	*glView;

- (IBAction)toggleFullScreen:(id)sender;

@end
