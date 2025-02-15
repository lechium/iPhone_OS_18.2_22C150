//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFObjCType : NSObject
{
    long long _code;	// 8 = 0x8
    NSString *_encoding;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_className;	// 32 = 0x20
    unsigned long long _size;	// 40 = 0x28
    unsigned long long _flags;	// 48 = 0x30
}

+ (id)typeForValue:(id)arg1;	// IMP=0x006000000004c424
+ (id)typeForEncoding:(const char *)arg1;	// IMP=0x006000000004beb9
- (void).cxx_destruct;	// IMP=0x000000000004be86
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property(readonly, nonatomic) long long code; // @synthesize code=_code;
- (void)getBytes:(void *)arg1 forObject:(id)arg2;	// IMP=0x000000000004bdc0
- (id)objectWithBytes:(const void *)arg1;	// IMP=0x000000000004bbd9
@property(readonly, nonatomic, getter=isObject) _Bool object;
@property(readonly, nonatomic, getter=isFloatingPointNumber) _Bool floatingPointNumber;
@property(readonly, nonatomic, getter=isIntegerNumber) _Bool integerNumber;
@property(readonly, nonatomic, getter=isNumber) _Bool number;
- (id)initWithCode:(long long)arg1 encoding:(id)arg2 name:(id)arg3 className:(id)arg4 size:(unsigned long long)arg5 flags:(unsigned long long)arg6;	// IMP=0x000000000004bacf

@end

