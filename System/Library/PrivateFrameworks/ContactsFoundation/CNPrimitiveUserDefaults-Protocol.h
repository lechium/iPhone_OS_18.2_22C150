//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class NSString;

@protocol CNPrimitiveUserDefaults <NSObject>
- (void)setupAutosync;
- (_Bool)synchronize;
- (void)primitiveRemoveObjectForKey:(NSString *)arg1;
- (_Bool)primitiveBoolValueForKey:(NSString *)arg1 keyExists:(_Bool *)arg2;
- (long long)primitiveIntegerValueForKey:(NSString *)arg1 keyExists:(_Bool *)arg2;
- (void)setPrimitiveObject:(id)arg1 forKey:(NSString *)arg2;
- (id)primitiveObjectForKey:(NSString *)arg1;
@end

