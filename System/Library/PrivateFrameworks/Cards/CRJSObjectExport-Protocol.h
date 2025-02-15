//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Cards/JSExport-Protocol.h>

@class JSValue;

@protocol CRJSObjectExport <JSExport>
+ (id)objectWithClassName:(JSValue *)arg1 objectType:(JSValue *)arg2;
- (JSValue *)backingObjectValueForKey:(JSValue *)arg1;
- (void)setBackingObjectValue:(JSValue *)arg1 forKey:(JSValue *)arg2;

@optional
+ (id)objectWithClassName:(JSValue *)arg1 objectType:(JSValue *)arg2 __JS_EXPORT_AS__objectWithClassName:(id)arg3;
- (JSValue *)backingObjectValueForKey:(JSValue *)arg1 __JS_EXPORT_AS__value:(id)arg2;
- (void)setBackingObjectValue:(JSValue *)arg1 forKey:(JSValue *)arg2 __JS_EXPORT_AS__setValue:(id)arg3;
@end

