//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;
@protocol HUEmbeddedTriggerActionSetGridViewControllerDelegate;

@interface HUEmbeddedTriggerActionSetGridViewController
{
    MISSING_TYPE *triggerBuilder;	// 48 = 0x30
    MISSING_TYPE *delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000041450
- (void)sceneEditor:(id)arg1 removeActionSetBuilderFromTrigger:(id)arg2;	// IMP=0x00000000000412b0
- (void)reloadActions;	// IMP=0x0000000000041190
- (id)initWithTriggerBuilder:(id)arg1;	// IMP=0x0000000000041080
@property(nonatomic) __weak id <HUEmbeddedTriggerActionSetGridViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic, retain) id triggerBuilder; // @synthesize triggerBuilder;

@end
