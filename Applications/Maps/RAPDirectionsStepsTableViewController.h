//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol RAPDirectionsStepsTableViewControllerDelegate;

@interface RAPDirectionsStepsTableViewController
{
    id <RAPDirectionsStepsTableViewControllerDelegate> _instructionDelegate;	// 8 = 0x8
}

+ (Class)dataSourceClass;	// IMP=0x002000000050465d
- (void).cxx_destruct;	// IMP=0x00200000005047b5
@property(nonatomic) __weak id <RAPDirectionsStepsTableViewControllerDelegate> instructionDelegate; // @synthesize instructionDelegate=_instructionDelegate;
- (_Bool)RAPDirectionsStepsList:(id)arg1 shouldShowFlagForStep:(id)arg2 listItem:(id)arg3;	// IMP=0x00100000005046f5
- (long long)tableViewStyle;	// IMP=0x00100000005046ea
- (id)init;	// IMP=0x001000000050466e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
