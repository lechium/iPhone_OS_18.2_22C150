//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNObservable, NSArray, NSDictionary, NSString;
@protocol CNSchedulerProvider, CNTUCallProvider;

@protocol CNTUCallProviderManager <NSObject>
@property(readonly, nonatomic) _Bool hasDefaultCallProvider;
@property(readonly, copy, nonatomic) NSDictionary *defaultVideoAppsBundleIdentifierScorer;
@property(readonly, copy, nonatomic) NSDictionary *defaultCallingAppsBundleIdentifierScorer;
- (void)emptyDefaultAppsCaches;
- (id <CNTUCallProvider>)thirdPartyCallProviderWithBundleIdentifier:(NSString *)arg1;
- (NSArray *)thirdPartyCallProvidersForActionType:(NSString *)arg1;
- (CNObservable *)observableForCallProvidersChangedWithSchedulerProvider:(id <CNSchedulerProvider>)arg1;
@end
