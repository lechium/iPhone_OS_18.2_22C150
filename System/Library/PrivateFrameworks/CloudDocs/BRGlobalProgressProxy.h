//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface BRGlobalProgressProxy
{
    NSString *_kind;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002b64f
- (id)progressProxy:(id)arg1 localizedDescriptionForProgress:(id)arg2;	// IMP=0x000000000002b5a3
- (_Bool)progressProxy:(id)arg1 shouldProxyProgress:(id)arg2;	// IMP=0x000000000002b4db
- (id)initWithGlobalProgressKind:(id)arg1;	// IMP=0x000000000002b42b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

