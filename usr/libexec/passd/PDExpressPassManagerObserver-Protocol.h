//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString, PDExpressPassManager, PKExpressTransactionState;

@protocol PDExpressPassManagerObserver <NSObject>

@optional
- (void)expressPassManager:(PDExpressPassManager *)arg1 didFinishExpressTransactionWithState:(PKExpressTransactionState *)arg2;
- (void)expressPassManager:(PDExpressPassManager *)arg1 willProcessPaymentApplicationsUpdateFromPriorPaymentApplications:(NSSet *)arg2 toPaymentApplications:(NSSet *)arg3 forPassUniqueIdentifier:(NSString *)arg4;
- (void)expressPassManager:(PDExpressPassManager *)arg1 didUpdateExpressPassConfigurations:(NSSet *)arg2;
@end

