//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000016d65b
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000016d60e
- (id)buildDictionaryRepresentation;	// IMP=0x002000000016d57b
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x000000000016d540
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000016d53a
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000016d528
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000016d51d
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000016d4ee
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x001000000016d481
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x001000000016d459
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000016d3b3
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x001000000016d663

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
