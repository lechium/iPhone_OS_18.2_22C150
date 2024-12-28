//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBOfficeArtReaderClient : NSObject
{
}

+ (id)readDrawableFromPackagePart:(id)arg1 foundInObject:(id)arg2 state:(id)arg3;	// IMP=0x0010000000399477
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(id)arg2;	// IMP=0x001000000039946c
+ (_Bool)xmlEquivalentOfDrawableCanBeUsed;	// IMP=0x0010000000399464
+ (_Bool)tablesAreAllowed;	// IMP=0x001000000018bd20
+ (_Bool)escherIsFullySupported;	// IMP=0x001000000013bf36
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;	// IMP=0x001000000039945e
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;	// IMP=0x001000000018bd28
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;	// IMP=0x0010000000140815
+ (void)readEshClientAnchor:(const void *)arg1 targetClientData:(id)arg2 state:(id)arg3;	// IMP=0x0010000000140aaf
+ (void)setAutoInsetForShape:(void *)arg1;	// IMP=0x0010000000144f04

@end
