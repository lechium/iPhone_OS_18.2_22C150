//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PSListController, PSSpecifier, TSSIMSetupFlow;

__attribute__((visibility("hidden")))
@interface PSUIQRCodeGroup : NSObject
{
    PSSpecifier *_groupSpecifier;	// 8 = 0x8
    PSListController *_listController;	// 16 = 0x10
    TSSIMSetupFlow *_flow;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000010a36
@property(retain) TSSIMSetupFlow *flow; // @synthesize flow=_flow;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
@property(retain, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
- (id)getLogger;	// IMP=0x00000000000109b1
- (void)scanQRCodePressed:(id)arg1;	// IMP=0x00000000000105b4
- (void)simSetupFlowCompleted:(unsigned long long)arg1;	// IMP=0x0000000000010438
- (id)specifiers;	// IMP=0x000000000001032a
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;	// IMP=0x00000000000101cf
- (id)init;	// IMP=0x0000000000010192

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

