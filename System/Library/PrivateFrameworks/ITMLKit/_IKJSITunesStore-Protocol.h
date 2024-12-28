//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSITunesStore-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class JSValue, NSArray, NSDictionary, NSString;

@protocol _IKJSITunesStore <IKJSITunesStore, JSExport>
@property(readonly, nonatomic, getter=isManagedAppleID) _Bool managedAppleID;
@property(retain, nonatomic) id cookie;
@property(retain, nonatomic) NSString *cookieURL;
@property(retain, nonatomic) NSString *storefront;
@property(readonly, nonatomic) NSString *networkConnectionType;
@property(readonly, nonatomic) NSString *userAgent;
@property(readonly, nonatomic) NSDictionary *accountInfo;
@property(readonly, nonatomic) NSString *DSID;
- (void)openDynamicUIURL:(NSString *)arg1:(NSDictionary *)arg2:(JSValue *)arg3;
- (void)openMarketingItem:(NSDictionary *)arg1:(NSDictionary *)arg2:(JSValue *)arg3;
- (void)fetchMarketingItem:(NSString *)arg1:(NSString *)arg2:(NSString *)arg3:(NSString *)arg4:(JSValue *)arg5;
- (void)updateServiceEligibility:(NSDictionary *)arg1;
- (void)signOut;
- (void)authenticate:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)evaluateScripts:(NSArray *)arg1:(JSValue *)arg2;
- (void)loadStoreContent:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)getServiceEligibility:(NSDictionary *)arg1:(JSValue *)arg2;
- (NSDictionary *)eligibilityForService:(NSDictionary *)arg1;
- (void)clearCookies;
- (void)flushUnreportedEvents;
- (void)recordEvent:(NSString *)arg1:(NSDictionary *)arg2;
- (id)makeStoreXMLHttpRequest;
- (void)invalidateBag;
- (JSValue *)getBag;
@end
