//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface BDSCRDTModelSyncVersionInfo : NSObject
{
    NSData *_data;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000008d8a5
- (void).cxx_destruct;	// IMP=0x002000000008da1a
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008d998
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000008d928
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000008d8ad
- (id)initWithData:(id)arg1;	// IMP=0x001000000008d83a

@end

