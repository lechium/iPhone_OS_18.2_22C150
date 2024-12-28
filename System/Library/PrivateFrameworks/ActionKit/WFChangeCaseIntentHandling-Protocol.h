//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/NSObject-Protocol.h>

@class WFChangeCaseIntent;

@protocol WFChangeCaseIntentHandling <NSObject>
- (void)resolveTypeForChangeCase:(WFChangeCaseIntent *)arg1 withCompletion:(void (^)(WFChangeCaseTypeResolutionResult *))arg2;
- (void)resolveTextForChangeCase:(WFChangeCaseIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)handleChangeCase:(WFChangeCaseIntent *)arg1 completion:(void (^)(WFChangeCaseIntentResponse *))arg2;

@optional
- (void)confirmChangeCase:(WFChangeCaseIntent *)arg1 completion:(void (^)(WFChangeCaseIntentResponse *))arg2;
@end
