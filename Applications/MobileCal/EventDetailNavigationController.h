//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class EKEvent;

@interface EventDetailNavigationController : UINavigationController
{
    CDUnknownBlockType _doneBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000012e072
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
@property(readonly, nonatomic) EKEvent *event;
- (struct CGSize)preferredContentSize;	// IMP=0x001000000012de9e
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000012de0e

@end
