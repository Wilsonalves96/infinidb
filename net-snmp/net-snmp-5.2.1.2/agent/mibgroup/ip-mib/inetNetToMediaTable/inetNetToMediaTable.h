/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32 $ of : mfd-top.m2c,v $
 *
 * $Id: inetNetToMediaTable.h,v 1.6 2004/10/16 00:21:20 rstory Exp $
 */
#ifndef INETNETTOMEDIATABLE_H
#define INETNETTOMEDIATABLE_H

#ifdef __cplusplus
extern          "C" {
#endif


/** @defgroup misc misc: Miscelaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>
#include <net-snmp/data_access/arp.h>

    /*
     * OID, column number and enum definions for  
     */
#include "inetNetToMediaTable_constants.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_inetNetToMediaTable(void);

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table inetNetToMediaTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * inetNetToMediaTable is subid 35 of ip.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.4.35, length: 8
     */
    /*
     *********************************************************************
     * When you register your mib, you get to provide a generic
     * pointer that will be passed back to you for most of the
     * functions calls.
     *
     * TODO:100:r: Review all context structures
     */
    /*
     * TODO:101:o: |-> Review inetNetToMediaTable registration context.
     */
    typedef netsnmp_data_list *inetNetToMediaTable_registration_ptr;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review inetNetToMediaTable data context structure.
     * This structure is used to represent the data for inetNetToMediaTable.
     */
    typedef netsnmp_arp_entry inetNetToMediaTable_data;


    /*
     *********************************************************************
     * TODO:115:o: |-> Review inetNetToMediaTable undo context.
     * We're just going to use the same data structure for our
     * undo_context. If you want to do something more efficent,
     * define your typedef here.
     */
    typedef inetNetToMediaTable_data inetNetToMediaTable_undo_data;

    /*
     * TODO:120:r: |-> Review inetNetToMediaTable mib index.
     * This structure is used to represent the index for inetNetToMediaTable.
     */
    typedef struct inetNetToMediaTable_mib_index_s {

        /*
         * inetNetToMediaIfIndex(1)/InterfaceIndex/ASN_INTEGER/long(long)//l/a/w/e/R/d/H
         */
        long            inetNetToMediaIfIndex;

        /*
         * inetNetToMediaNetAddressType(2)/InetAddressType/ASN_INTEGER/long(u_long)//l/a/w/E/r/d/h
         */
        u_long          inetNetToMediaNetAddressType;

        /*
         * inetNetToMediaNetAddress(3)/InetAddress/ASN_OCTET_STR/char(char)//L/a/w/e/R/d/h
         */
        /** 128 - 2(other indexes) - oid length(10) = 115 */
        char            inetNetToMediaNetAddress[115];
        size_t          inetNetToMediaNetAddress_len;


    } inetNetToMediaTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review inetNetToMediaTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(8)
     */
#define MAX_inetNetToMediaTable_IDX_LEN     118


    /*
     *********************************************************************
     * TODO:130:o: |-> Review inetNetToMediaTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * inetNetToMediaTable_rowreq_ctx pointer.
     */
    typedef struct inetNetToMediaTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_inetNetToMediaTable_IDX_LEN];

        inetNetToMediaTable_mib_index tbl_idx;

        inetNetToMediaTable_data *data;
        inetNetToMediaTable_undo_data *undo;
        unsigned int    column_set_flags;       /* flags for set columns */


        /*
         * flags per row. Currently, the first 8 bits are reserverd
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * implementor's context pointer (provided during registration)
         */
        inetNetToMediaTable_registration_ptr inetNetToMediaTable_reg;

        /*
         * TODO:131:o: |   |-> Add useful data to inetNetToMediaTable rowreq context.
         */
        int             inetNetToMediaRowStatus,
            inetNetToMediaRowStatus_undo;

        /*
         * storage for future expansion
         */
        netsnmp_data_list *inetNetToMediaTable_data_list;

    } inetNetToMediaTable_rowreq_ctx;

    typedef struct inetNetToMediaTable_ref_rowreq_ctx_s {
        inetNetToMediaTable_rowreq_ctx *rowreq_ctx;
    } inetNetToMediaTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int
        inetNetToMediaTable_pre_request
        (inetNetToMediaTable_registration_ptr user_context);
    int
        inetNetToMediaTable_post_request
        (inetNetToMediaTable_registration_ptr user_context);

    inetNetToMediaTable_data *inetNetToMediaTable_allocate_data(void);
    void
         inetNetToMediaTable_release_data(inetNetToMediaTable_data * data);

    int
        inetNetToMediaTable_check_dependencies
        (inetNetToMediaTable_rowreq_ctx * rowreq_ctx);
    int
        inetNetToMediaTable_commit(inetNetToMediaTable_rowreq_ctx *
                                   rowreq_ctx);

    extern oid      inetNetToMediaTable_oid[];
    extern int      inetNetToMediaTable_oid_size;


#include "inetNetToMediaTable_interface.h"
#include "inetNetToMediaTable_data_access.h"
    /*
     *********************************************************************
     * GET function declarations
     */

    /*
     *********************************************************************
     * GET Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table inetNetToMediaTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * inetNetToMediaTable is subid 35 of ip.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.4.35, length: 8
     */
    /*
     * indexes
     */

    int
        inetNetToMediaPhysAddress_get(inetNetToMediaTable_rowreq_ctx *
                                      rowreq_ctx, char
                                      **inetNetToMediaPhysAddress_val_ptr_ptr, size_t
                                      *inetNetToMediaPhysAddress_val_ptr_len_ptr);
    int
        inetNetToMediaLastUpdated_get(inetNetToMediaTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long *
                                      inetNetToMediaLastUpdated_val_ptr);
    int             inetNetToMediaType_get(inetNetToMediaTable_rowreq_ctx *
                                           rowreq_ctx,
                                           u_long *
                                           inetNetToMediaType_val_ptr);
    int             inetNetToMediaState_get(inetNetToMediaTable_rowreq_ctx
                                            * rowreq_ctx,
                                            u_long *
                                            inetNetToMediaState_val_ptr);
    int
        inetNetToMediaRowStatus_get(inetNetToMediaTable_rowreq_ctx *
                                    rowreq_ctx,
                                    u_long *
                                    inetNetToMediaRowStatus_val_ptr);


    int
        inetNetToMediaTable_indexes_set_tbl_idx
        (inetNetToMediaTable_mib_index * tbl_idx,
         long inetNetToMediaIfIndex_val,
         u_long inetNetToMediaNetAddressType_val,
         char *inetNetToMediaNetAddress_val_ptr,
         size_t inetNetToMediaNetAddress_val_ptr_len);
    int
        inetNetToMediaTable_indexes_set(inetNetToMediaTable_rowreq_ctx *
                                        rowreq_ctx,
                                        long inetNetToMediaIfIndex_val,
                                        u_long
                                        inetNetToMediaNetAddressType_val,
                                        char
                                        *inetNetToMediaNetAddress_val_ptr, size_t
                                        inetNetToMediaNetAddress_val_ptr_len);



    /*
     *********************************************************************
     * SET function declarations
     */

    /*
     *********************************************************************
     * SET Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table inetNetToMediaTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * inetNetToMediaTable is subid 35 of ip.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.4.35, length: 8
     */
    int             inetNetToMediaIfIndex_check_index(inetNetToMediaTable_rowreq_ctx * rowreq_ctx);     /* internal */
    int             inetNetToMediaNetAddressType_check_index(inetNetToMediaTable_rowreq_ctx * rowreq_ctx);      /* internal */
    int             inetNetToMediaNetAddress_check_index(inetNetToMediaTable_rowreq_ctx * rowreq_ctx);  /* internal */


    int
        inetNetToMediaTable_validate_index
        (inetNetToMediaTable_registration_ptr inetNetToMediaTable_reg,
         inetNetToMediaTable_rowreq_ctx * rowreq_ctx);
    int
        inetNetToMediaTable_undo_setup(inetNetToMediaTable_rowreq_ctx *
                                       rowreq_ctx);
    int
        inetNetToMediaTable_undo_cleanup(inetNetToMediaTable_rowreq_ctx *
                                         rowreq_ctx);
    int
        inetNetToMediaTable_commit(inetNetToMediaTable_rowreq_ctx *
                                   rowreq_ctx);
    int
        inetNetToMediaTable_undo_commit(inetNetToMediaTable_rowreq_ctx *
                                        rowreq_ctx);


    int
        inetNetToMediaPhysAddress_check_value
        (inetNetToMediaTable_rowreq_ctx * rowreq_ctx,
         char *inetNetToMediaPhysAddress_val_ptr,
         size_t inetNetToMediaPhysAddress_val_ptr_len);
    int
        inetNetToMediaPhysAddress_undo_setup(inetNetToMediaTable_rowreq_ctx
                                             * rowreq_ctx);
    int
        inetNetToMediaPhysAddress_set(inetNetToMediaTable_rowreq_ctx *
                                      rowreq_ctx, char
                                      *inetNetToMediaPhysAddress_val_ptr, size_t
                                      inetNetToMediaPhysAddress_val_ptr_len);
    int
        inetNetToMediaPhysAddress_undo(inetNetToMediaTable_rowreq_ctx *
                                       rowreq_ctx);

    int
        inetNetToMediaLastUpdated_check_value
        (inetNetToMediaTable_rowreq_ctx * rowreq_ctx,
         u_long inetNetToMediaLastUpdated_val);
    int
        inetNetToMediaLastUpdated_undo_setup(inetNetToMediaTable_rowreq_ctx
                                             * rowreq_ctx);
    int
        inetNetToMediaLastUpdated_set(inetNetToMediaTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long
                                      inetNetToMediaLastUpdated_val);
    int
        inetNetToMediaLastUpdated_undo(inetNetToMediaTable_rowreq_ctx *
                                       rowreq_ctx);

    int
        inetNetToMediaType_check_value(inetNetToMediaTable_rowreq_ctx *
                                       rowreq_ctx,
                                       u_long inetNetToMediaType_val);
    int
        inetNetToMediaType_undo_setup(inetNetToMediaTable_rowreq_ctx *
                                      rowreq_ctx);
    int             inetNetToMediaType_set(inetNetToMediaTable_rowreq_ctx *
                                           rowreq_ctx,
                                           u_long inetNetToMediaType_val);
    int             inetNetToMediaType_undo(inetNetToMediaTable_rowreq_ctx
                                            * rowreq_ctx);

    int
        inetNetToMediaState_check_value(inetNetToMediaTable_rowreq_ctx *
                                        rowreq_ctx,
                                        u_long inetNetToMediaState_val);
    int
        inetNetToMediaState_undo_setup(inetNetToMediaTable_rowreq_ctx *
                                       rowreq_ctx);
    int             inetNetToMediaState_set(inetNetToMediaTable_rowreq_ctx
                                            * rowreq_ctx,
                                            u_long
                                            inetNetToMediaState_val);
    int             inetNetToMediaState_undo(inetNetToMediaTable_rowreq_ctx
                                             * rowreq_ctx);

    int
        inetNetToMediaRowStatus_check_value(inetNetToMediaTable_rowreq_ctx
                                            * rowreq_ctx,
                                            u_long
                                            inetNetToMediaRowStatus_val);
    int
        inetNetToMediaRowStatus_undo_setup(inetNetToMediaTable_rowreq_ctx *
                                           rowreq_ctx);
    int
        inetNetToMediaRowStatus_set(inetNetToMediaTable_rowreq_ctx *
                                    rowreq_ctx,
                                    u_long inetNetToMediaRowStatus_val);
    int
        inetNetToMediaRowStatus_undo(inetNetToMediaTable_rowreq_ctx *
                                     rowreq_ctx);


    int
        inetNetToMediaTable_check_dependencies
        (inetNetToMediaTable_rowreq_ctx * ctx);


    /*
     * DUMMY markers, ignore
     *
     * TODO:099:x: *************************************************************
     * TODO:199:x: *************************************************************
     * TODO:299:x: *************************************************************
     * TODO:399:x: *************************************************************
     * TODO:499:x: *************************************************************
     */

#ifdef __cplusplus
}
#endif
#endif                          /* INETNETTOMEDIATABLE_H */
