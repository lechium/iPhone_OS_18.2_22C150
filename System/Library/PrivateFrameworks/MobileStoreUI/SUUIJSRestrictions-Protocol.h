//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/JSExport-Protocol.h>

@class JSValue, NSString;

@protocol SUUIJSRestrictions <JSExport>
- (void)presentExplicitRestrictionAlertIfNeededOfType:(NSString *)arg1:(JSValue *)arg2;
- (void)didDisplayExplicitRestrictionAlertOfType:(NSString *)arg1;
- (void)shouldDisplayExplicitRestrictionAlertOfType:(NSString *)arg1:(JSValue *)arg2;
- (void)setAllowExplicitContent;
- (void)isRestrictionsPasscodeSet:(JSValue *)arg1;
- (void)isExplicitContentDisallowedInCurrentStoreFront:(JSValue *)arg1;
- (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(JSValue *)arg1;
- (_Bool)isRestrictedApp:(NSString *)arg1;
@end

