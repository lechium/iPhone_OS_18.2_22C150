//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeWalletDataSource : HMFObject
{
    int _passCodeChangeNotificationToken;	// 8 = 0x8
}

@property int passCodeChangeNotificationToken; // @synthesize passCodeChangeNotificationToken=_passCodeChangeNotificationToken;
- (void)canNotifyAboutExpressModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006eb54b
- (void)showExpressEnabledUserNotificationForWalletKeyWithPassUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006eb4e2
- (id)numberValueFromNoBackupStoreWithKey:(id)arg1;	// IMP=0x00000000006eb491
- (void)persistNumberValueToNoBackupStore:(id)arg1 withKey:(id)arg2;	// IMP=0x00000000006eb477
- (_Bool)registerForPasscodeChangeNotificationWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000006eb34b
@property(readonly) long long walletKeyColor;
@property(readonly) double accessoryWriteRetryInterval;
@property(readonly) long long accessoryWriteMaxRetryCount;
@property(readonly, getter=isResidentCapable) _Bool residentCapable;
@property(readonly) _Bool isWatch;
- (void)dealloc;	// IMP=0x00000000006eb089
- (id)init;	// IMP=0x00000000006eb047

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
