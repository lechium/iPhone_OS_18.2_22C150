//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/NSObject-Protocol.h>

@class MFMailboxUid, MailAccount, NSString;

@protocol MFUserAgent <NSObject>
- (_Bool)canUseSpotlightIndex;
- (_Bool)canRegisterForAPSPush;
- (_Bool)isAllowedToAccessProtectedData;
- (_Bool)isMaild;
- (_Bool)isMobileMail;
- (_Bool)isForeground;
- (void)networkActivityEnded:(id)arg1;
- (void)networkActivityStarted:(id)arg1;
- (void)autofetchAccount:(MailAccount *)arg1 mailboxUid:(MFMailboxUid *)arg2;

@optional
- (NSString *)sourceApplicationBundleIdentifier;
@end

