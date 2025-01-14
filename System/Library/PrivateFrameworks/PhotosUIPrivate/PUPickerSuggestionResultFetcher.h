//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol PUPickerSuggestion;

@interface PUPickerSuggestionResultFetcher : NSObject
{
    MISSING_TYPE *photoLibrary;	// 8 = 0x8
    MISSING_TYPE *context;	// 16 = 0x10
    MISSING_TYPE *updateHandler;	// 24 = 0x18
    MISSING_TYPE *workQueue;	// 40 = 0x28
    MISSING_TYPE *workQueue_currentSuggestion;	// 48 = 0x30
    MISSING_TYPE *workQueue_result;	// 56 = 0x38
    MISSING_TYPE *workQueue_wallpaperSuggestionCache;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000ca82d
- (id)init;	// IMP=0x00000000000ca7d6
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x00000000000ca769
- (id)initWithPhotoLibrary:(id)arg1 isProcessing:(_Bool)arg2 isDeviceAspectRatioContentMode:(_Bool)arg3 contentHasSpecialFilter:(_Bool)arg4 updateHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c8e90
@property(nonatomic, retain) id <PUPickerSuggestion> currentSuggestion;

@end

