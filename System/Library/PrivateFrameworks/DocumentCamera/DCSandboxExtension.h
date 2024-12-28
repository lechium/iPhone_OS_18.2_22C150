//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface DCSandboxExtension : NSObject
{
    _Bool _canAccessFileURL;	// 8 = 0x8
    _Bool _shouldIssueSandboxExtensionWhenEncoding;	// 9 = 0x9
    NSURL *_fileURL;	// 16 = 0x10
    long long _sandboxExtensionHandle;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000030975
- (void).cxx_destruct;	// IMP=0x0000000000030fec
@property(nonatomic) long long sandboxExtensionHandle; // @synthesize sandboxExtensionHandle=_sandboxExtensionHandle;
@property(readonly, nonatomic) _Bool shouldIssueSandboxExtensionWhenEncoding; // @synthesize shouldIssueSandboxExtensionWhenEncoding=_shouldIssueSandboxExtensionWhenEncoding;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) _Bool canAccessFileURL; // @synthesize canAccessFileURL=_canAccessFileURL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000030d01
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003097d
- (void)dealloc;	// IMP=0x0000000000030937
- (void)relinquish;	// IMP=0x00000000000306aa
- (id)initWithFileURL:(id)arg1;	// IMP=0x0000000000030619

@end
