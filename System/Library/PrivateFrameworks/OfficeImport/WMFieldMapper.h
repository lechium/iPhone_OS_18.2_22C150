//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface WMFieldMapper
{
    int mMode;	// 60 = 0x3c
    unsigned int mType;	// 64 = 0x40
    NSMutableString *mMarkerText;	// 72 = 0x48
    NSString *mLink;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000454706
- (void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3;	// IMP=0x00000000000f3838
- (void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3;	// IMP=0x00000000000f39b9
- (id)initWithWDFieldMarker:(id)arg1 parent:(id)arg2;	// IMP=0x00000000000f352c

@end
