//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BADeveloperDebugMessage : NSObject
{
    unsigned long long _messageVersion;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000032b2f
@property(nonatomic) unsigned long long messageVersion; // @synthesize messageVersion=_messageVersion;
- (id)archivedRepresentationWithError:(id *)arg1;	// IMP=0x0010000000032a9c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000032a0c
- (id)init;	// IMP=0x00100000000329d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000032924

@end
