//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SCATMenuStopContinuousGestureItemViewDelegate;

@interface SCATModernMenuStopContinuousGestureSheet
{
    id <SCATMenuStopContinuousGestureItemViewDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000be1d3
@property(nonatomic) __weak id <SCATMenuStopContinuousGestureItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x00100000000be0d9
- (_Bool)shouldAllowDwellSelection;	// IMP=0x00100000000be0d1
- (_Bool)shouldKeepScannerAwake;	// IMP=0x00100000000be0c9
- (struct CGRect)rectToClear;	// IMP=0x00100000000be061
- (_Bool)allowsExitAction;	// IMP=0x00100000000be059
- (_Bool)allowsBackAction;	// IMP=0x00100000000be051
- (id)makeMenuItemsIfNeeded;	// IMP=0x00100000000bdf2c

@end

