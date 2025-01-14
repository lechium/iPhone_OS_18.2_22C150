//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface IXOwnedDataPromiseSeed
{
    NSURL *_stagingBaseDir;	// 8 = 0x8
    NSString *_sandboxExtensionToken;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002f09a
- (void).cxx_destruct;	// IMP=0x000000000002f1ab
@property(copy, nonatomic) NSString *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property(retain, nonatomic) NSURL *stagingBaseDir; // @synthesize stagingBaseDir=_stagingBaseDir;
- (Class)clientPromiseClass;	// IMP=0x000000000002f153
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002f0a2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002efc6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002eed7

@end

