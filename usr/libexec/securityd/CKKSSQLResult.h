//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKKSSQLResult : NSObject
{
    NSString *_stringValue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000033716
@property(retain) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)asBase64DecodedData;	// IMP=0x0010000000033660
- (id)asISO8601Date;	// IMP=0x00100000000335bd
- (id)asNSNumberInteger;	// IMP=0x001000000003351f
- (id)asString;	// IMP=0x001000000003350d
- (long long)asNSInteger;	// IMP=0x00100000000334c9
- (_Bool)asBOOL;	// IMP=0x0010000000033485
- (id)init:(id)arg1;	// IMP=0x001000000003341a

@end
