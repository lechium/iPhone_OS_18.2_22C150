//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDebuggingIvar : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_typeDescription;	// 16 = 0x10
    id _value;	// 24 = 0x18
    NSObject *_object;	// 32 = 0x20
    struct objc_ivar *_objcIvar;	// 40 = 0x28
    const char *_typeEncoding;	// 48 = 0x30
}

+ (id)ivarWithObjcIvar:(struct objc_ivar *)arg1 forObject:(id)arg2;	// IMP=0x006000000185afc6
@property(nonatomic) const char *typeEncoding; // @synthesize typeEncoding=_typeEncoding;
@property(nonatomic) struct objc_ivar *objcIvar; // @synthesize objcIvar=_objcIvar;
@property(nonatomic) NSObject *object; // @synthesize object=_object;
@property(nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *typeDescription; // @synthesize typeDescription=_typeDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;	// IMP=0x000000000185b1ad
@property(readonly, nonatomic) _Bool isObject;
@property(readonly, nonatomic) NSString *valueDescription;

@end
