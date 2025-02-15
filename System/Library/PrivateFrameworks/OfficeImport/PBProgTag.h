//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBProgTag : NSObject
{
}

+ (id)ensureBinaryTagDataWithName:(const unsigned short *)arg1 inProgTags:(id)arg2;	// IMP=0x00800000004349d9
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)arg1 inProgTagsParent:(id)arg2;	// IMP=0x008000000043490e
+ (id)binaryTagDataWithName:(const unsigned short *)arg1 inProgTags:(id)arg2;	// IMP=0x008000000001c9ca
+ (id)binaryTagDataWithName:(const unsigned short *)arg1 inProgTagsParent:(id)arg2;	// IMP=0x008000000001c940
+ (void)readBulletImagesFromContainerParent:(id)arg1 state:(id)arg2;	// IMP=0x008000000015073a
+ (void)readClientData:(id)arg1 state:(id)arg2;	// IMP=0x0080000000029539
+ (void)readDocumentList:(id)arg1 state:(id)arg2;	// IMP=0x008000000001c746
+ (void)readBulletStylesFromMainMaster:(id)arg1 state:(id)arg2;	// IMP=0x00800000000221fd
+ (const struct PBTextFormatProgTagInfo *)textFormatInfoForProgTagName:(const unsigned short *)arg1;	// IMP=0x00800000004348c6
+ (id)readMacCharStyleFromClientData:(id)arg1;	// IMP=0x008000000002969d
+ (void)readMacCharStylesFromDocumentList:(id)arg1 state:(id)arg2;	// IMP=0x008000000001cca9
+ (id)readBulletStyleFromClientData:(id)arg1;	// IMP=0x0080000000029621
+ (void)readHyperlinkScreenTipsFromDocumentList:(id)arg1 state:(id)arg2;	// IMP=0x008000000001cde6
+ (void)readBulletImagesFromDocumentList:(id)arg1 state:(id)arg2;	// IMP=0x008000000001cc0c
+ (void)readBulletStylesFromDocumentList:(id)arg1 state:(id)arg2;	// IMP=0x008000000001c803

@end

