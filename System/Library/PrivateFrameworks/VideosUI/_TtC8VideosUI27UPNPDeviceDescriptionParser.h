//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI27UPNPDeviceDescriptionParser : NSObject
{
    MISSING_TYPE *scratchpad;	// 8 = 0x8
    MISSING_TYPE *currentElementName;	// 16 = 0x10
    MISSING_TYPE *xmlPath;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000009e2b81
- (id)init;	// IMP=0x00000000009e2b40
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;	// IMP=0x00000000009e29df
- (void)parser:(id)arg1 foundCharacters:(id)arg2;	// IMP=0x00000000009e28d8
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;	// IMP=0x00000000009e25fd

@end

