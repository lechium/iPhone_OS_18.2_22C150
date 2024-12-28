//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDETAFilter, GEOPDPaginationParameters, GEOPDRecentRouteInfo, GEOPDResultRefinementQuery, GEOPDSSearchEvChargingParameters, GEOPDSSearchSessionData, GEOPDSSessionUserActionMetadata, GEOPDSearchOriginationInfo, GEOPDViewportInfo, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategorySearchParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _knownRefinementTypes;	// 24 = 0x18
    CDStruct_95bda58d _supportedPlaceSummaryFormatTypes;	// 48 = 0x30
    CDStruct_95bda58d _supportedRelatedEntitySectionTypes;	// 72 = 0x48
    CDStruct_95bda58d _supportedSearchSectionTypes;	// 96 = 0x60
    CDStruct_95bda58d _supportedSearchTierTypes;	// 120 = 0x78
    NSString *_enrichmentCampaignNamespace;	// 144 = 0x90
    GEOPDETAFilter *_etaFilter;	// 152 = 0x98
    GEOPDSSearchEvChargingParameters *_evChargingParameters;	// 160 = 0xa0
    GEOPDPaginationParameters *_paginationParameters;	// 168 = 0xa8
    GEOPDViewportInfo *_previousSearchViewport;	// 176 = 0xb0
    GEOPDRecentRouteInfo *_recentRouteInfo;	// 184 = 0xb8
    GEOPDResultRefinementQuery *_resultRefinementQuery;	// 192 = 0xc0
    NSMutableArray *_searchEnrichmentRevisionMetadatas;	// 200 = 0xc8
    GEOPDSearchOriginationInfo *_searchOriginationInfo;	// 208 = 0xd0
    GEOPDSSearchSessionData *_searchSessionData;	// 216 = 0xd8
    GEOPDSSessionUserActionMetadata *_sessionUserActionMetadata;	// 224 = 0xe0
    NSData *_suggestionEntryMetadata;	// 232 = 0xe8
    GEOPDViewportInfo *_viewportInfo;	// 240 = 0xf0
    unsigned int _readerMarkPos;	// 248 = 0xf8
    unsigned int _readerMarkLength;	// 252 = 0xfc
    struct os_unfair_lock_s _readerLock;	// 256 = 0x100
    unsigned int _auxiliaryTierNumResults;	// 260 = 0x104
    unsigned int _blurredHourOfDay;	// 264 = 0x108
    unsigned int _dayOfWeek;	// 268 = 0x10c
    unsigned int _maxResults;	// 272 = 0x110
    int _placeSummaryRevision;	// 276 = 0x114
    int _searchType;	// 280 = 0x118
    _Bool _supportCategorySearchResultSection;	// 284 = 0x11c
    _Bool _supportSearchEnrichment;	// 285 = 0x11d
    _Bool _supportStructuredRapAffordance;	// 286 = 0x11e
    struct {
        unsigned int has_auxiliaryTierNumResults:1;
        unsigned int has_blurredHourOfDay:1;
        unsigned int has_dayOfWeek:1;
        unsigned int has_maxResults:1;
        unsigned int has_placeSummaryRevision:1;
        unsigned int has_searchType:1;
        unsigned int has_supportCategorySearchResultSection:1;
        unsigned int has_supportSearchEnrichment:1;
        unsigned int has_supportStructuredRapAffordance:1;
        unsigned int read_unknownFields:1;
        unsigned int read_knownRefinementTypes:1;
        unsigned int read_supportedPlaceSummaryFormatTypes:1;
        unsigned int read_supportedRelatedEntitySectionTypes:1;
        unsigned int read_supportedSearchSectionTypes:1;
        unsigned int read_supportedSearchTierTypes:1;
        unsigned int read_enrichmentCampaignNamespace:1;
        unsigned int read_etaFilter:1;
        unsigned int read_evChargingParameters:1;
        unsigned int read_paginationParameters:1;
        unsigned int read_previousSearchViewport:1;
        unsigned int read_recentRouteInfo:1;
        unsigned int read_resultRefinementQuery:1;
        unsigned int read_searchEnrichmentRevisionMetadatas:1;
        unsigned int read_searchOriginationInfo:1;
        unsigned int read_searchSessionData:1;
        unsigned int read_sessionUserActionMetadata:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x000000000046c581
- (unsigned long long)hash;	// IMP=0x000000000046bf29
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046ba14
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000046b38a
- (void)writeTo:(id)arg1;	// IMP=0x000000000046ab2a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000046ab1b
- (id)jsonRepresentation;	// IMP=0x000000000046a1ac
- (id)dictionaryRepresentation;	// IMP=0x0000000000468892
- (id)description;	// IMP=0x00000000004687e3
- (void)dealloc;	// IMP=0x0000000000465811
- (id)initWithData:(id)arg1;	// IMP=0x00000000004657b5
- (id)init;	// IMP=0x0000000000465759

@end
