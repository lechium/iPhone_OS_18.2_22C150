//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class BCAnnotationRange, MISSING_TYPE, NSData, NSString;

@interface BCProtoAnnotation : PBCodable
{
    double _creationDate;	// 8 = 0x8
    double _locationModificationDate;	// 16 = 0x10
    double _modificationDate;	// 24 = 0x18
    double _userModificationDate;	// 32 = 0x20
    NSString *_annotationVersion;	// 40 = 0x28
    NSString *_assetVersion;	// 48 = 0x30
    NSString *_attachments;	// 56 = 0x38
    NSString *_chapterTitle;	// 64 = 0x40
    NSString *_creatorIdentifier;	// 72 = 0x48
    NSString *_futureProofing11;	// 80 = 0x50
    NSString *_futureProofing12;	// 88 = 0x58
    NSString *_locationCFIString;	// 96 = 0x60
    NSString *_note;	// 104 = 0x68
    NSString *_physicalPageNumber;	// 112 = 0x70
    int _plAbsolutePhysicalLocation;	// 120 = 0x78
    int _plLocationRangeEnd;	// 124 = 0x7c
    int _plLocationRangeStart;	// 128 = 0x80
    NSString *_plLocationStorageUUID;	// 136 = 0x88
    NSData *_plUserData;	// 144 = 0x90
    float _readingProgress;	// 152 = 0x98
    float _readingProgressHighWaterMark;	// 156 = 0x9c
    NSString *_representativeText;	// 160 = 0xa0
    NSString *_selectedText;	// 168 = 0xa8
    BCAnnotationRange *_selectedTextRange;	// 176 = 0xb0
    unsigned int _style;	// 184 = 0xb8
    unsigned int _type;	// 188 = 0xbc
    NSString *_uuid;	// 192 = 0xc0
    _Bool _deleted;	// 200 = 0xc8
    _Bool _isUnderline;	// 201 = 0xc9
    _Bool _spineIndexUpdated;	// 202 = 0xca
    struct {
        unsigned int locationModificationDate:1;
        unsigned int userModificationDate:1;
        unsigned int plAbsolutePhysicalLocation:1;
        unsigned int plLocationRangeEnd:1;
        unsigned int plLocationRangeStart:1;
        unsigned int readingProgress:1;
        unsigned int readingProgressHighWaterMark:1;
        unsigned int style:1;
        unsigned int type:1;
        unsigned int deleted:1;
        unsigned int isUnderline:1;
        unsigned int spineIndexUpdated:1;
    } _has;	// 204 = 0xcc
}

- (void).cxx_destruct;	// IMP=0x00200000000811cd
@property(nonatomic) double locationModificationDate; // @synthesize locationModificationDate=_locationModificationDate;
@property(retain, nonatomic) NSData *plUserData; // @synthesize plUserData=_plUserData;
@property(retain, nonatomic) NSString *plLocationStorageUUID; // @synthesize plLocationStorageUUID=_plLocationStorageUUID;
@property(nonatomic) int plLocationRangeStart; // @synthesize plLocationRangeStart=_plLocationRangeStart;
@property(nonatomic) int plLocationRangeEnd; // @synthesize plLocationRangeEnd=_plLocationRangeEnd;
@property(nonatomic) int plAbsolutePhysicalLocation; // @synthesize plAbsolutePhysicalLocation=_plAbsolutePhysicalLocation;
@property(retain, nonatomic) NSString *futureProofing12; // @synthesize futureProofing12=_futureProofing12;
@property(retain, nonatomic) NSString *futureProofing11; // @synthesize futureProofing11=_futureProofing11;
@property(nonatomic) float readingProgress; // @synthesize readingProgress=_readingProgress;
@property(nonatomic) _Bool spineIndexUpdated; // @synthesize spineIndexUpdated=_spineIndexUpdated;
@property(nonatomic) float readingProgressHighWaterMark; // @synthesize readingProgressHighWaterMark=_readingProgressHighWaterMark;
@property(retain, nonatomic) BCAnnotationRange *selectedTextRange; // @synthesize selectedTextRange=_selectedTextRange;
@property(nonatomic) double userModificationDate; // @synthesize userModificationDate=_userModificationDate;
@property(retain, nonatomic) NSString *chapterTitle; // @synthesize chapterTitle=_chapterTitle;
@property(retain, nonatomic) NSString *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSString *assetVersion; // @synthesize assetVersion=_assetVersion;
@property(retain, nonatomic) NSString *annotationVersion; // @synthesize annotationVersion=_annotationVersion;
@property(retain, nonatomic) NSString *physicalPageNumber; // @synthesize physicalPageNumber=_physicalPageNumber;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(retain, nonatomic) NSString *representativeText; // @synthesize representativeText=_representativeText;
@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(nonatomic) double modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSString *locationCFIString; // @synthesize locationCFIString=_locationCFIString;
@property(nonatomic) _Bool isUnderline; // @synthesize isUnderline=_isUnderline;
@property(nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(retain, nonatomic) NSString *creatorIdentifier; // @synthesize creatorIdentifier=_creatorIdentifier;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
- (MISSING_TYPE *)mergeFrom: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000080a99
- (unsigned long long)hash;	// IMP=0x001000000008012d
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007fb45
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007f6b1
- (void)copyTo:(id)arg1;	// IMP=0x001000000007f2fd
- (void)writeTo:(id)arg1;	// IMP=0x001000000007ef0d
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007ef00
- (id)dictionaryRepresentation;	// IMP=0x001000000007ddac
- (id)description;	// IMP=0x001000000007dcfd
@property(nonatomic) _Bool hasLocationModificationDate;
@property(readonly, nonatomic) _Bool hasPlUserData;
@property(readonly, nonatomic) _Bool hasPlLocationStorageUUID;
@property(nonatomic) _Bool hasPlLocationRangeStart;
@property(nonatomic) _Bool hasPlLocationRangeEnd;
@property(nonatomic) _Bool hasPlAbsolutePhysicalLocation;
@property(readonly, nonatomic) _Bool hasFutureProofing12;
@property(readonly, nonatomic) _Bool hasFutureProofing11;
@property(nonatomic) _Bool hasReadingProgress;
@property(nonatomic) _Bool hasSpineIndexUpdated;
@property(nonatomic) _Bool hasReadingProgressHighWaterMark;
@property(readonly, nonatomic) _Bool hasSelectedTextRange;
@property(nonatomic) _Bool hasUserModificationDate;
@property(readonly, nonatomic) _Bool hasChapterTitle;
@property(readonly, nonatomic) _Bool hasAttachments;
@property(readonly, nonatomic) _Bool hasAssetVersion;
@property(readonly, nonatomic) _Bool hasAnnotationVersion;
@property(readonly, nonatomic) _Bool hasPhysicalPageNumber;
@property(nonatomic) _Bool hasType;
@property(nonatomic) _Bool hasStyle;
@property(readonly, nonatomic) _Bool hasSelectedText;
@property(readonly, nonatomic) _Bool hasRepresentativeText;
@property(readonly, nonatomic) _Bool hasNote;
@property(readonly, nonatomic) _Bool hasLocationCFIString;
@property(nonatomic) _Bool hasIsUnderline;
@property(nonatomic) _Bool hasDeleted;

@end
