//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MCMResultContainerFromPath
{
    NSString *_relativePath;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d14c7
@property(retain, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
- (_Bool)encodeResultOntoReply:(id)arg1;	// IMP=0x00000000000d1333
- (id)initWithUUID:(id)arg1 containerPathIdentifier:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 POSIXUser:(id)arg5 personaUniqueString:(id)arg6 sandboxToken:(const char *)arg7 existed:(_Bool)arg8 url:(id)arg9 info:(id)arg10 transient:(_Bool)arg11 userManagedAssetsRelPath:(id)arg12 creator:(id)arg13 relativePath:(id)arg14;	// IMP=0x00000000000d124e

@end
