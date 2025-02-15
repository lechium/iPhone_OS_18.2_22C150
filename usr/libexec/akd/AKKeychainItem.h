//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKKeychainItemDescriptor, NSData;

@interface AKKeychainItem : NSObject
{
    NSData *_value;	// 8 = 0x8
    AKKeychainItemDescriptor *_descriptor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000024e44
@property(retain, nonatomic) AKKeychainItemDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
- (id)itemAttributes;	// IMP=0x0010000000024d5a
- (id)initWithAttributes:(id)arg1;	// IMP=0x0010000000024c9e
- (id)initWithDescriptor:(id)arg1 value:(id)arg2;	// IMP=0x0010000000024c05

@end

