//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TCCDIdentity : NSObject
{
    long long _identityType;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000670fe
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property long long identityType; // @synthesize identityType=_identityType;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2;	// IMP=0x0010000000067040

@end
