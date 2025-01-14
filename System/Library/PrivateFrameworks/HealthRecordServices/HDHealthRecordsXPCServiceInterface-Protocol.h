//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDExtractionRequest, HDFHIRResourceData, HDHRSSignedClinicalDataProcessingContextCollection, HDOriginalFHIRResourceObject, HDReferenceExtractionRequest, HKClinicalDocumentIndexingRequest, HKPIIRedactor, HKSignedClinicalDataSource, NSArray, NSString;

@protocol HDHealthRecordsXPCServiceInterface
- (void)remote_fetchSpotlightSearchResultsForQueryString:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_indexClinicalDocumentsWithRequest:(HKClinicalDocumentIndexingRequest *)arg1 completion:(void (^)(HKClinicalDocumentIndexingResult *, NSError *))arg2;
- (void)remote_processSignedClinicalDataContextCollection:(HDHRSSignedClinicalDataProcessingContextCollection *)arg1 completion:(void (^)(HKSignedClinicalDataParsingResult *, NSError *))arg2;
- (void)remote_processOriginalSignedClinicalDataRecords:(NSArray *)arg1 options:(unsigned long long)arg2 completion:(void (^)(HKSignedClinicalDataParsingResult *, NSError *))arg3;
- (void)remote_reprocessOriginalRecords:(NSArray *)arg1 options:(unsigned long long)arg2 completion:(void (^)(HDHRSSignedClinicalDataProcessingContextCollection *, NSError *))arg3;
- (void)remote_preprocessSignedClinicalDataFHIRResourceObject:(HDOriginalFHIRResourceObject *)arg1 options:(unsigned long long)arg2 completion:(void (^)(HDHRSSignedClinicalDataProcessingContextCollection *, NSError *))arg3;
- (void)remote_preprocessSignedClinicalData:(HKSignedClinicalDataSource *)arg1 options:(unsigned long long)arg2 completion:(void (^)(HDHRSSignedClinicalDataProcessingContextCollection *, NSError *))arg3;
- (void)remote_optInDataForFHIRDocumentWithRequest:(HDExtractionRequest *)arg1 redactor:(HKPIIRedactor *)arg2 completion:(void (^)(HDClinicalDataCollectionExtractionResult *, NSError *))arg3;
- (void)remote_extractAttachmentContentFromFHIRResource:(HDFHIRResourceData *)arg1 completion:(void (^)(HKFHIRAttachmentContent *, NSError *))arg2;
- (void)remote_compareExistingPatientResourceData:(HDFHIRResourceData *)arg1 incomingPatientResourceData:(HDFHIRResourceData *)arg2 completion:(void (^)(HKFHIRPatientResourceComparisonResult *, NSError *))arg3;
- (void)remote_executeFHIRExtractionRequest:(HDExtractionRequest *)arg1 completion:(void (^)(HDExtractionResult *, NSError *))arg2;
- (void)remote_executeFHIRReferenceExtractionRequest:(HDReferenceExtractionRequest *)arg1 completion:(void (^)(HDReferenceExtractionResult *, NSError *))arg2;
- (void)remote_supportedFHIRConfigurationWithCompletion:(void (^)(HRSSupportedFHIRConfiguration *, NSError *))arg1;
- (void)remote_rulesVersionForFHIRDocumentExtractionWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
@end

