//
//  ViewController.h
//  video_record_test
//
//  Created by Ryan on 2015/11/16.
//  Copyright © 2015年 ryan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MediaPlayer/MediaPlayer.h"
#import "MobileCoreServices/MobileCoreServices.h"

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) NSURL *videoURL;
@property (strong, nonatomic) MPMoviePlayerController *videoController;

- (IBAction)captureVideo:(id)sender;

@end

