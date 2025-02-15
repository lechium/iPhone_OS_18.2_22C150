//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class NSString, PSListController, TSSIMSetupFlow, UINavigationController;

__attribute__((visibility("hidden")))
@interface PSUIConvertToESIMSpecifier : PSSpecifier
{
    TSSIMSetupFlow *_flow;	// 184 = 0xb8
    NSString *_phoneNumber;	// 192 = 0xc0
    NSString *_carrierName;	// 200 = 0xc8
    PSListController *_hostController;	// 208 = 0xd0
    UINavigationController *_navigationController;	// 216 = 0xd8
    _Bool _isViewControllerPopNeeded;	// 224 = 0xe0
    NSString *_iccid;	// 232 = 0xe8
}

+ (id)specifierWithPhoneNumber:(id)arg1 carrierName:(id)arg2 hostController:(id)arg3 isViewControllerPopNeeded:(_Bool)arg4 iccid:(id)arg5;	// IMP=0x001000000002d862
+ (id)keyFor:(id)arg1;	// IMP=0x001000000002d7f1
- (void).cxx_destruct;	// IMP=0x000000000002ed21
- (id)getLogger;	// IMP=0x000000000002ed01
- (void)_showWifiAlert;	// IMP=0x000000000002e84d
- (void)_convertToeSIM;	// IMP=0x000000000002e27d
- (void)simSetupFlowCompleted:(unsigned long long)arg1;	// IMP=0x000000000002dfd3
- (void)odcCanceled:(id)arg1;	// IMP=0x000000000002df31
- (void)odcFailed:(id)arg1;	// IMP=0x000000000002de8f
- (void)odcSuccess:(id)arg1 isViewControllerPopNeeded:(_Bool)arg2;	// IMP=0x000000000002dda5
- (void)convertToeSIMCellPressed:(id)arg1;	// IMP=0x000000000002dd33
- (void)dealloc;	// IMP=0x000000000002dcbe
- (id)initWithPhoneNumber:(id)arg1 carrierName:(id)arg2 hostController:(id)arg3 isViewControllerPopNeeded:(_Bool)arg4 iccid:(id)arg5;	// IMP=0x000000000002d99f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

