//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@protocol EDConversationRemoteStorage <NSObject>
- (NSString *)storageName;
- (_Bool)synchronize;
- (void)refresh;
- (NSDictionary *)dictionaryRepresentation;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (void)removeDictionaryForKey:(NSString *)arg1;
- (void)setDictionary:(NSMutableDictionary *)arg1 forKey:(NSString *)arg2;
- (_Bool)isInitialized;
@end
