//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient, NSMutableArray, NSString, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUINetworkSelectionSubgroup : NSObject
{
    PSListController *_listController;	// 8 = 0x8
    PSSpecifier *_parentSpecifier;	// 16 = 0x10
    CoreTelephonyClient *_ctClient;	// 24 = 0x18
    NSMutableArray *_bundleControllers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000281bf
@property(retain, nonatomic) NSMutableArray *bundleControllers; // @synthesize bundleControllers=_bundleControllers;
@property(retain, nonatomic) CoreTelephonyClient *ctClient; // @synthesize ctClient=_ctClient;
@property(nonatomic) __weak PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
- (id)getLogger;	// IMP=0x000000000002811b
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;	// IMP=0x0000000000027f72
- (void)networkSelected:(id)arg1 success:(_Bool)arg2 mode:(id)arg3;	// IMP=0x0000000000027dc9
- (void)reloadCellularNetworkSpecifier;	// IMP=0x0000000000027cde
- (id)localizedCellularNetworkName:(id)arg1;	// IMP=0x0000000000027b96
- (id)specifiers;	// IMP=0x00000000000278e9
- (void)willEnterForeground;	// IMP=0x00000000000278d7
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;	// IMP=0x0000000000027881
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3;	// IMP=0x0000000000027758

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

