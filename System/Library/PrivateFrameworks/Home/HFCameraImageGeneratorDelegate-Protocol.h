//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage;

@protocol HFCameraImageGeneratorDelegate
- (void)imageGenerator:(id)arg1 finishedGeneratingImagesForKey:(NSString *)arg2;
- (void)imageGenerator:(id)arg1 failedToGenerateImageForRequestedTime:(CDStruct_198678f7)arg2 actualTime:(CDStruct_198678f7)arg3 forKey:(NSString *)arg4;
- (void)imageGenerator:(id)arg1 didGenerateImage:(UIImage *)arg2 requestedTime:(CDStruct_198678f7)arg3 actualTime:(CDStruct_198678f7)arg4 forKey:(NSString *)arg5;
@end
