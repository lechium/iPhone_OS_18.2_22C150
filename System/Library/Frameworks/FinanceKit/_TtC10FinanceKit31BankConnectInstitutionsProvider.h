//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol FKBankConnectInstitutionsProviderDelegate;

@interface _TtC10FinanceKit31BankConnectInstitutionsProvider : NSObject
{
    MISSING_TYPE *store;	// 8 = 0x8
    MISSING_TYPE *context;	// 16 = 0x10
    MISSING_TYPE *lastNotificationToken;	// 24 = 0x18
    MISSING_TYPE *remoteChangeNotificationTask;	// 32 = 0x20
    MISSING_TYPE *delegate;	// 40 = 0x28
}

+ (id)makeProviderAndReturnError:(id *)arg1;	// IMP=0x00600000003e04a0
- (void).cxx_destruct;	// IMP=0x00000000003e2d10
- (id)init;	// IMP=0x00000000003e2cb0
- (void)fetchConnectedInstitutionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003e2000
@property(nonatomic) __weak id <FKBankConnectInstitutionsProviderDelegate> delegate; // @synthesize delegate;

@end
