//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface STPropertyStorage : NSObject
{
    struct _SsrwPropertyStorage *m_pPropertyStorage;	// 8 = 0x8
}

- (void)setBlobDocumentPropertyWithName:(id)arg1 to:(id)arg2;	// IMP=0x00000000003711da
- (void)setStringDocumentPropertyWithId:(int)arg1 to:(id)arg2;	// IMP=0x000000000037115e
- (void)setShortDocumentPropertyWithId:(int)arg1 to:(short)arg2;	// IMP=0x00000000003710f9
- (void)setLongDocumentPropertyWithId:(int)arg1 to:(int)arg2;	// IMP=0x0000000000371094
- (void)setDocumentPropertyWithId:(int)arg1 to:(id)arg2;	// IMP=0x0000000000371044
- (id)getDocumentPropertyWithName:(id)arg1 propType:(int *)arg2;	// IMP=0x0000000000370fc0
- (id)getStringDocumentPropertyWithId:(int)arg1;	// IMP=0x0000000000370d22
- (short)getShortDocumentPropertyWithId:(int)arg1;	// IMP=0x0000000000370caf
- (int)getLongDocumentPropertyWithId:(int)arg1;	// IMP=0x0000000000370c3d
- (id)getDocumentPropertyWithId:(int)arg1 propType:(int *)arg2;	// IMP=0x0000000000370bab
- (void)close;	// IMP=0x0000000000370b9d
- (id)initWithPropertyStorage:(struct _SsrwPropertyStorage *)arg1;	// IMP=0x0000000000370b44

@end
