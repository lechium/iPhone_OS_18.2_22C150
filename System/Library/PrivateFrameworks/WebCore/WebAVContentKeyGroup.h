//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface WebAVContentKeyGroup : NSObject
{
    struct WeakObjCPtr<AVContentKeySession> _contentKeySession;	// 8 = 0x8
    struct WeakPtr<WebCore::ContentKeyGroupDataSource, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> _dataSource;	// 16 = 0x10
    struct RetainPtr<NSUUID> _groupIdentifier;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000002db3970
- (void).cxx_destruct;	// IMP=0x0000000002db3910
- (void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3;	// IMP=0x0000000002db2c70
- (void)expire;	// IMP=0x0000000002db23e0
- (_Bool)associateContentKeyRequest:(id)arg1;	// IMP=0x0000000002db1c00
@property(readonly) NSData *contentProtectionSessionIdentifier;
- (id)initWithContentKeySession:(id)arg1 dataSource:(void *)arg2;	// IMP=0x0000000002db12c0
@property(readonly, nonatomic) CDStruct_3707b61b *logChannel;
@property(readonly, nonatomic) const void *loggerPtr;
@property(readonly, nonatomic) const void *logIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

