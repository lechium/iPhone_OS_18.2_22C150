//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXActivity.h>

@class NSUndoManager;

__attribute__((visibility("hidden")))
@interface PUAddToLastUsedAlbumActivity : PXActivity
{
    NSUndoManager *_undoManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000063779d
- (void)performActivity;	// IMP=0x0000000000637636
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000637580
- (id)_systemImageName;	// IMP=0x0000000000637573
- (id)activityTitle;	// IMP=0x00000000006374a7
- (id)activityType;	// IMP=0x0000000000637493
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000006373db

@end
