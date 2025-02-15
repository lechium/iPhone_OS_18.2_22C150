//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPCacheAsset : NSObject
{
    NSString *_key;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    unsigned long long _size;	// 24 = 0x18
    double _accessDate;	// 32 = 0x20
}

+ (id)fromProto:(id)arg1;	// IMP=0x0040000000006d04
+ (id)toProto:(id)arg1;	// IMP=0x0010000000006c23
- (void).cxx_destruct;	// IMP=0x0020000000006e3e
@property(nonatomic) double accessDate; // @synthesize accessDate=_accessDate;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)initWithName:(id)arg1 size:(unsigned long long)arg2 state:(unsigned long long)arg3 accessDate:(id)arg4;	// IMP=0x0010000000006b68

@end

