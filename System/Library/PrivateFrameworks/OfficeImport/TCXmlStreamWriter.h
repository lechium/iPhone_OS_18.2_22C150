//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, TCXmlTextWriterProvider;

__attribute__((visibility("hidden")))
@interface TCXmlStreamWriter : NSObject
{
    TCXmlTextWriterProvider *mTextWriterProvider;	// 8 = 0x8
    unsigned int mCurrentDepth;	// 16 = 0x10
    _Bool mContentAddedToTopElement;	// 20 = 0x14
    NSMutableSet *mAddedIds;	// 24 = 0x18
}

+ (_Bool)writeAnchorTargetToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2;	// IMP=0x00600000002e991b
+ (_Bool)writeDtdToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 pubid:(id)arg3 sysid:(id)arg4 subset:(id)arg5;	// IMP=0x00600000002e97c1
+ (_Bool)writeNamespaceToStream:(struct _xmlTextWriter *)arg1 prefix:(id)arg2 uri:(const char *)arg3;	// IMP=0x00600000002e96fe
+ (_Bool)writeAttributeToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 content:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;	// IMP=0x00600000002e95ca
+ (_Bool)writePlainAttributeToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 content:(id)arg3;	// IMP=0x00600000002e94d8
+ (_Bool)writeStringToStream:(struct _xmlTextWriter *)arg1 text:(id)arg2;	// IMP=0x00600000002e9442
+ (_Bool)endElementInStream:(struct _xmlTextWriter *)arg1;	// IMP=0x00600000002e942f
+ (_Bool)startElementInStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;	// IMP=0x00600000002e936a
+ (_Bool)startPlainElementInStream:(struct _xmlTextWriter *)arg1 name:(id)arg2;	// IMP=0x00600000002e92fc
+ (void)resetElementIds;	// IMP=0x00600000002e89d0
+ (id)newXmlStreamWriterWithZipEntryName:(id)arg1 outputStream:(id)arg2 isCompressed:(_Bool)arg3;	// IMP=0x00600000002e88fa
- (void).cxx_destruct;	// IMP=0x00000000002e99d6
- (_Bool)writeAnchorTarget:(id)arg1;	// IMP=0x00000000002e9284
- (_Bool)writeDtd:(id)arg1 pubid:(id)arg2 sysid:(id)arg3 subset:(id)arg4;	// IMP=0x00000000002e91a1
- (_Bool)writeNamespace:(id)arg1 uri:(const char *)arg2;	// IMP=0x00000000002e9124
- (_Bool)writeElementId:(id)arg1;	// IMP=0x00000000002e908f
- (_Bool)writePlainAttribute:(id)arg1 doubleContent:(double)arg2;	// IMP=0x00000000002e9078
- (_Bool)writePlainAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;	// IMP=0x00000000002e9052
- (_Bool)writePlainAttribute:(id)arg1 boolContent:(_Bool)arg2;	// IMP=0x00000000002e903a
- (_Bool)writePlainAttribute:(id)arg1 intContent:(long long)arg2;	// IMP=0x00000000002e9022
- (_Bool)writePlainAttribute:(id)arg1 content:(id)arg2;	// IMP=0x00000000002e900a
- (_Bool)writeAttribute:(id)arg1 doubleContent:(double)arg2 prefix:(id)arg3 ns:(const char *)arg4;	// IMP=0x00000000002e8f4a
- (_Bool)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;	// IMP=0x00000000002e8e89
- (_Bool)writeAttribute:(id)arg1 boolContent:(_Bool)arg2 prefix:(id)arg3 ns:(const char *)arg4;	// IMP=0x00000000002e8dcc
- (_Bool)writeAttribute:(id)arg1 intContent:(long long)arg2 prefix:(id)arg3 ns:(const char *)arg4;	// IMP=0x00000000002e8d0f
- (_Bool)writeAttribute:(id)arg1 content:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;	// IMP=0x00000000002e8c29
- (_Bool)endElementsToDepth:(unsigned int)arg1;	// IMP=0x00000000002e8bdd
- (unsigned int)currentDepth;	// IMP=0x00000000002e8bd4
- (_Bool)writeString:(id)arg1;	// IMP=0x00000000002e8b39
- (_Bool)endElement;	// IMP=0x00000000002e8ade
- (_Bool)startPlainElement:(id)arg1;	// IMP=0x00000000002e8ac7
- (_Bool)startElement:(id)arg1 prefix:(id)arg2 ns:(const char *)arg3;	// IMP=0x00000000002e8a0d
- (_Bool)contentAddedToTopElement;	// IMP=0x00000000002e8a04
- (struct _xmlTextWriter *)textWriter;	// IMP=0x00000000002e89ee
- (id)textWriterProvider;	// IMP=0x00000000002e89e0
- (_Bool)tearDown;	// IMP=0x00000000002e884d
- (_Bool)setUp;	// IMP=0x00000000002e87a3
- (_Bool)isWriting;	// IMP=0x00000000002e878a
- (void)dealloc;	// IMP=0x00000000002e8717
- (id)initWithTextWriterProvider:(id)arg1;	// IMP=0x00000000002e8673

@end

