//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class MKMapSnapshotter;

__attribute__((visibility("hidden")))
@interface MKMapSnapshotView : UIImageView
{
    MKMapSnapshotter *_snapshotter;	// 8 = 0x8
    MKMapSnapshotter *_gridSnapshotter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002746fe
- (void)cancel;	// IMP=0x00000000002746ae
- (void)takeSnapshotWithOptions:(id)arg1 gridOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000274138
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000027409b

@end
