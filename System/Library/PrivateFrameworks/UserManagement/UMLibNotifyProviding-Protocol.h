//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserManagement/NSObject-Protocol.h>

@class NSString;

@protocol UMLibNotifyProviding <NSObject>
- (unsigned long long)stateForToken:(int)arg1 error:(id *)arg2;
- (_Bool)setState:(unsigned long long)arg1 forToken:(int)arg2;
- (_Bool)notificationHasPostedForToken:(int)arg1 error:(id *)arg2;
- (int)registerCheck:(NSString *)arg1;
- (int)registerPlain:(NSString *)arg1;
- (_Bool)post:(NSString *)arg1;
@end
